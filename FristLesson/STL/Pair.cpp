#include <bits/stdc++.h>
using namespace std;

void explainPair(){

	// ##Container : Pair, Vector etc
	//Pairs 
	pair<int, int> pName = {1, 3};
	cout<<pName.first<<" & "<<pName.second<<endl;

	pair<int, pair<int, int>>multiplePair = {1, {1,3}};
	cout<<"Inner pair"<< multiplePair.first <<" "<< multiplePair.second.first<<endl; 
	
	// Pair in array
	pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

	cout <<"Inside in array's second element: "<<arr[1].second; 
}


void explainVector(){
	//Here array's have the fixed size. So if we need to dynamic size.
	// or unknow size In that situation we can use "VECTOR"

	vector<int> vName;

	vName.push_back(1);
	vName.emplace_back(2); //similar to push_back fast than push_back

	vector<pair<int, int>> vec;

}




int main()
{

	explainVector();

	return 0;
}