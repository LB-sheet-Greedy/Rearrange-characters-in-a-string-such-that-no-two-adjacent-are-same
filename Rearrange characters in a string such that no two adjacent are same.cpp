/*
Approach 1: Priority queue (later)

Approach 2: >> Fill all the even positions of the result string first, with the highest frequency character. 
            >> If there are still some even positions remaining, fill them first. Once even positions are done, 
			>> Then fill the odd positions. This way, we can ensure that no two adjacent characters are the same. 
	

Milestones:			
[[DONE]] Store counts of each character in an array and get max count 
create a result string of size input string setting all values null using memset()
sort the count[] in decreasing order of counts
make encryption and decryption () using -97 and +97
fill all the even positions of the result string first, with the highest frequency character.
Once even positions are done, Then fill the odd positions. with chacater of next highest count

ISSUES:

VERY VERY COMPLEX: use youtube saved video solution
see youtube to optimize it. Its solution is simple

*/

#include<iostream>
#include<algorithm>  //to use memset()
#include<cstring>
   
using namespace std;

//assuming all small letters in the code

//Hashmap ki jagah apna khud ka encode decode function bnaya. Use index of count[] to know character 
//and each element of this array stores count.
 
//is position index me store hoga count array me
int string_2_Position(string str,int i)
{
	int Pos;
	Pos=(int)str[i];
	
	return Pos;
}

//count[] ke index se uska character nikalo
char Position_2_Char(int index)
{
	char c;
	
	return c;
}

int main()
{
	int index;
	string str = "aaabbb";
	int l=str.length();
	//to store counts
	int n=26;
	int count[n];
	
	//initialising all count[] elements = 0
	memset(count,0,n*sizeof(count[0]));
	
	//setting counts of each character
	for(int i=0;i<l;i++)
	{
		//storing count of str[i] in count[]
		index=string_2_Position(str,i);
		
		//storing count of each chacaters
		count[index]+=1;
	}
	
	cout<<"\n";
	//test
	for(int i=0;i<n;i++)
		cout<<count[i]<<" ";
	
	return 0;
}
