#include<iostream>
#include<vector>
#include<array>
#include"RBTree.h"
#include"Student.h"


using namespace std;

//void test01()
//{
//	int dataLength = 10;
//
//	BinarySearchTree<double>* bst = new BinarySearchTree<double>;
//	array<float, 10> arr = { 1.777,3.66,5.555,7.444,9.99,6.44,4.33,2.22,0.123,8.31 };
//	for (float i : arr) {
//		bst->add(i);
//	}
//
//
//	bst->preorder();
//	cout << endl;
//	bst->inorder();
//	cout << endl;
//	bst->postorder();
//	cout << endl;
//	bst->levelOrder();
//
//	Student sdata[] = {
//		Student("a",18,100),
//		Student("b",19,67),
//		Student("chase",18,96),
//		Student("d",17,92),
//		Student("e",20,83),
//	};
//	int sdataLength = sizeof(sdata) / sizeof(sdata[0]);
//
//	BinarySearchTree<Student>* sbst = new BinarySearchTree<Student>();
//	for (int i = 0; i < sdataLength; i++) {
//		sbst->add(sdata[i]);
//	}
//	cout << endl;
//	sbst->preorder();
//	cout << endl;
//	sbst->inorder();
//	cout << endl;
//	sbst->postorder();
//	cout << endl;
//	sbst->levelOrder();
//
//
//	Man mdata[] = {
//	  Man("a",89,1000),
//	  Man("b",29,2500),
//	  Man("c",45,3500),
//	  Man("d",17,900),
//	  Man("e",20,600),
//	};
//	int mdataLength = sizeof(mdata) / sizeof(mdata[0]);  // c++ 和 Java差异：c++没有直接获取数组长度的方法！
//
//	BinarySearchTree<Man>* mbst = new BinarySearchTree<Man>();
//	for (int i = 0; i < mdataLength; i++) {
//		mbst->add(mdata[i]);
//	}
//	cout << endl;
//	mbst->preorder();
//	cout << endl;
//	mbst->inorder();
//	cout << endl;
//	mbst->postorder();
//	cout << endl;
//	mbst->levelOrder();
//}
//
//
//void test02()
//{
//	int data[] = { 6,3,8,1,5,7,9,4,3,2,10,9,8 }; //,1,5,7,9,4,3,2,10,9,8 
//	//int data[] =  {6,3,1};
//	int dataLength = sizeof(data) / sizeof(int);
//
//
//	BinarySearchTree<int> bst1;
//	BinarySearchTree<int>* bst = new BinarySearchTree<int>();
//	for (int i = 0; i < dataLength; i++) {
//		bst->add(data[i]);
//	}
//
//	// 输出树高
//	bst->PrintHight();
//
//	// 输出是否为完全二叉树
//	bst->PrintIsCompeteBinary();
//
//
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//	cout << "删除两度节点-6" << endl;
//	bst->remove(6);
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//	cout << "删除1度节点-9" << endl;
//	bst->remove(9);
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//	cout << "删除0度节点-10" << endl;
//	bst->remove(10);
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//}


//void test03()
//{
//
//	int data[] = {2,5,6,7}; //,1,5,7,9,4,3,2,10,9,8 
//	//int data[] =  {6,3,1};
//	int dataLength = sizeof(data) / sizeof(int);
//
//	AVLTree<int>* bst = new AVLTree<int>;
//	for (int i = 0; i < dataLength; i++) {
//		bst->add(data[i]);
//	}
//
//	// 输出树高
//	bst->PrintHight();
//
//	// 输出是否为完全二叉树
//	bst->PrintIsCompeteBinary();
//
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//	cout << "添加节点8" << endl;
//	bst->add(8);
//
//	bst->PrintNodeByLevel();
//
//	cout << "添加节点9" << endl;
//	bst->add(9);
//
//	bst->PrintNodeByLevel();
//
//
//	cout << "添加节点1" << endl;
//	bst->add(1);
//
//	bst->PrintNodeByLevel();
//
//	cout << "添加节点-1" << endl;
//	bst->add(-1);
//
//	bst->PrintNodeByLevel();
//
//	cout << "添加节点10" << endl;
//	bst->add(10);
//
//	bst->PrintNodeByLevel();
//
//	cout << "添加节点11" << endl;
//	bst->add(11);
//
//	bst->PrintNodeByLevel();
//
//	cout << "删除1度节点10" << endl;
//	bst->remove(10);
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//
//	cout << "删除两度节点9" << endl;
//	bst->remove(9);
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//	cout << "删除0度节点6" << endl;
//	bst->remove(6);
//	bst->PrintNodeByLevel();
//	cout << "\n\n";
//
//}

void test04()
{

	int data[] = { 73, 91, 54, 30, 66, 14, 46, 81, 48, 44, 56, 34, 47, 40 }; //,1,5,7,9,4,3,2,10,9,8 
	//int data[] =  {6,3,1};
	int dataLength = sizeof(data) / sizeof(int);

	RBTree<int>* rbt = new RBTree<int>;
	for (int i = 0; i < dataLength; i++) {
		rbt->add(data[i]);
	}

	// 输出树高
	rbt->PrintHight();

	// 输出是否为完全二叉树
	rbt->PrintIsCompeteBinary();

	rbt->PrintNodeByLevel();
	cout << "\n\n";


		cout << "删除1度节点48" << endl;
		rbt->remove(48);
		rbt->PrintNodeByLevel();
		cout << "\n\n";
	
		cout << "删除2度节点54" << endl;
		rbt->remove(54);
		rbt->PrintNodeByLevel();
		cout << "\n\n";

		cout << "删除红色0度节点81" << endl;
		rbt->remove(81);
		rbt->PrintNodeByLevel();
		cout << "\n\n";
	

		cout << "删除黑色0度节点47" << endl;
		rbt->remove(47);
		rbt->PrintNodeByLevel();
		cout << "\n\n";
		//cout << "删除两度节点" << endl;
		//bst->remove(3);
		//bst->printnodebylevel();
		//cout << "\n\n";
	
		//cout << "删除0度节点1" << endl;
		//bst->remove(6);
		//bst->printnodebylevel();
		//cout << "\n\n";

}

#include"TreeSet.h"
int main()
{
	//TreeSet<int>* set = new TreeSet<int>;
	//int array[] = { 1,2,3,4,5,8,775,45,3,3,3,999,3,4,4,4,5,5,5,5,888,66,55,44 };

	//for (int i : array)
	//	set->add(i);

	//set->traversal();

	//set->remove(2);

	//set->traversal();
	return 0;
}