#include<iostream>
#include<string>
#include<vector>
using namespace std;

//This chooses what do you do with votes with same characters twice or three times.
enum Option{
	Invalid = 0,
	Highest = 1,
	Lowest = 2,
};

class Data{
	private:
		vector<string> votes;
		int n;
		vector<double> average;
		vector<double>	std;
	public:
		Data(){
			n=0;
		}
};

class SingleResultGenerator{
	private:
		Option option;
		
	public:
		SingleResultGenerator(Option o){
			option o;
		}
		void getVote(string v){
		}
		bool isValidVote(string v){
		}
		string doubleRemover(string v){
		}
		string result(){
		}
};
