#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 20
struct DataItem 
{
	int data;
	int key;
};
struct DataItem* hashArray[SIZE];
struct DataItem* dummyItem;
struct DataItem* item;
int hashCode(int key) 
{
	return key % SIZE;
}
struct DataItem *search(int key)
{
//get the hash
	int hashIndex = hashCode(key);
//move in array until an empty
	while(hashArray[hashIndex] != NULL) 
	{
		if(hashArray[hashIndex]->key == key)
		return hashArray[hashIndex];
		//go to next cell
		++hashIndex;
		//wrap around the table
		hashIndex %= SIZE;
	}
	return NULL;
}
void insert(int key,int data) 
{
	struct DataItem *item = (struct DataItem*) malloc(sizeof(struct
	DataItem));
	item-&gt;data = data;
	item-&gt;key = key;
	//get the hash
	int hashIndex = hashCode(key);
	//move in array until an empty or deleted cell
	while(hashArray[hashIndex] != NULL &amp;&amp; hashArray[hashIndex]-
	&gt;key != -1) 
	{
		//go to next cell
		++hashIndex;
		//wrap around the table
		hashIndex %= SIZE;
	}
	hashArray[hashIndex] = item;
}
struct DataItem* delete(struct DataItem* item) 
{
	int key = item-&gt;key;
	//get the hash
	int hashIndex = hashCode(key);
	//move in array until an empty
	while(hashArray[hashIndex] != NULL) 
	{
		if(hashArray[hashIndex]-&gt;key == key) 
		{
			struct DataItem* temp = hashArray[hashIndex];
			//assign a dummy item at deleted position
			hashArray[hashIndex] = dummyItem;
			return temp;
		}
		//go to next cell
		++hashIndex;
		//wrap around the table
		hashIndex %= SIZE;
	}
	return NULL;
}
void display() 
{
	int i = 0;
	for(i = 0; i&lt;SIZE; i++) 
	{
		if(hashArray[i] != NULL)
		printf(&quot; (%d,%d)&quot;,hashArray[i]-&gt;key,hashArray[i]-&gt;data);
		else
		printf(&quot; ~~ &quot;);
	}
	printf(&quot;\n&quot;);
}
int main() 
{
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem-&gt;data = -1;
	dummyItem-&gt;key = -1;
	insert(1, 20);
	insert(2, 70);
	insert(42, 80);
	insert(4, 25);
	insert(12, 44);
	insert(14, 32);
	insert(17, 11);
	insert(13, 78);
	insert(37, 97);
	display();
	item = search(37);
	if(item != NULL) 
	{
		printf(&quot;Element found: %d\n&quot;, item-&gt;data);
	} 
	else 
	{
		printf(&quot;Element not found\n&quot;);
	}
	delete(item);

	item = search(37);
	if(item != NULL) 
	{
		printf(&quot;Element found: %d\n&quot;, item-&gt;data);
	} 
	else 
	{	
		printf(&quot;Element not found\n&quot;);
	}
}
