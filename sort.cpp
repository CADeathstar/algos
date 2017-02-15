#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
void BubbleSort(vector <string> &inputs); //function prototype 

int main()
{
  vector<string> inputs;
  string input;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
 BubbleSort(inputs); //Call BubbleSort Function
 
 for (unsigned int i=0;i< inputs.size();i++)
 {
	 cout << inputs[i] << endl;
 }
 
}

void BubbleSort (vector <string> &inputs) //BubbleSort Function
{
	string temp;
	for(unsigned int k=1;k< inputs.size();k++)//number of passes
	{
			for(unsigned int i=0;i<inputs.size()-k;i++)//number of swaps
			{
				if (inputs[i] > inputs[i+1])
				{
				temp = inputs[i];
				inputs[i] = inputs[i+1];
				inputs[i+1] = temp;
				}
			}
			if ((k%20000 == 0) && (k > 0))
			{
				cout << "number of passes=" << k;
			}
	}
}
