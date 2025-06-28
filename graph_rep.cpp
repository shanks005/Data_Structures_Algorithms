#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<int>>&mat,int i,int j){
	mat[i][j]=1;
	mat[j][i]=1;
}

void displayMatrix(vector<vector<int>>&mat){
	int V=mat.size();
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			cout<<mat[i][j]<<" ";
		}
		cout << endl;
	}
}
int main(){
	int V=4;
	vector<vector<int>>mat(V,vector<int>(V,0));

	addEdge(mat,0,1);
	addEdge(mat,0,2);
	addEdge(mat,1,2);
	addEdge(mat,2,3);

	cout<<"Adjacency Matrix Representation is \n" << endl;

	displayMatrix(mat);

	return 0;
}

/* In this code we have created an adjacency matrix to represent a graph in c++,
 * the way it works is if there is no edge from i to j it is represented as 0, 
 * if there is an edge from i to j then it is represented as 1
 * kind of like a boolean logic
 * then we display the matrix using a nested for loop*/
