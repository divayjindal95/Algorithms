#include <iostream>
#include <cmath>
using namespace std;

struct node{
  int a;
  int b;
  int mul;
};

//void build_tree(int *tree , int arr, int node, int a, int b) {
//    if(a > b) return; // Out of range
//
//  	if(a == b) { // Leaf node
//    		tree[node] = arr[a]; // Init value
//		return;
//	}
//
//	build_tree(node*2, a, (a+b)/2); // Init left child
//	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
//
//	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
//}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree1(struct node *tree ,int node1, int a, int b, int i, int j, int value) {

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a == b) { // Leaf node1
    		tree[node1].a += value;
        tree[node1].mul=(tree[node1].a)*(tree[node1].b);
    		return;
	}

	update_tree1(tree,node1*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree1(tree,1+node1*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node1].mul = tree[node1*2].mul + tree[node1*2+1].mul; // Updating root with max value
}

void update_tree2(struct node *tree,int node1, int a, int b, int i, int j, int value) {

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a == b) { // Leaf node
    		tree[node1].b += value;
        tree[node1].mul=(tree[node1].a)*(tree[node1].b);
    		return;
	}

	update_tree2(tree  , node1*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree2(tree  , 1+node1*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node1].mul = tree[node1*2].mul + tree[node1*2+1].mul; // Updating root with max value
}
int query_tree(struct node *tree , int node1, int a, int b, int i, int j) {

	if(a > b || a > j || b < i) return -100000; // Out of range

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node1].mul;

	int q1 = query_tree(tree,node1*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(tree , 1+node1*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1+q2; // Return final result

	return res;
}
int main(){
    int n,q;
    cin>>n>>q;
    int num=pow(2,ceil(log2(n)))-1;
    cin.ignore();
    int p[num];
    struct node tree[num];
    for(int i=0;i<num;i++){
      tree[i].a=0;
      tree[i].b=0;
      tree[i].mul=0;
    }
    string s;
    getline(cin,s);
    update_tree1(tree,1,0,n-1,s[1]-'0',s[2]-'0',s[3]-'0');
    for(int i=0;i<num;i++){
      cout<<tree[i].a;
    }


    for(int i=0;i<q;i++){
      getline(cin,s);
      if(s[0]=='1')
        update_tree1(tree,1,0,n-1,s[1]-'0',s[2]-'0',s[3]-'0');
      if(s[0]=='2')
        update_tree2(tree,1,0,n-1,s[1]-'0',s[2]-'0',s[3]-'0');
      if(s[0]=='3')
        cout<<query_tree(tree,1,0,n-1,s[1]-'0',s[2]-'0');

    }
    //construct(arr, 0, n-1, p, 0);
    //for(int i=0;i<=num;i++)
    //  cout<<p[i]<<"\n";
    //std::cout  <<getSum(p,1, 4,0,n-1,0);
}
