#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, p, aa, q;
class node
{
public:
	node* prev;
	node* next;
	ll val;
	node(ll v, node* c = NULL)
	{
		prev = c;
		val = v;
		next = NULL;
	}
};
node *indx;
class Linked {
private:
	node *root;
	node *top;
public:
	Linked()
	{
		root = NULL;
		top = NULL;
	}
	void Insert(ll x)
	{
		if (!root)
		{
			root = new node(x);
			top = root;
		}
		else
		{
			node*curr = new node(x, root);
			root->next = curr;
			root = curr;
		}
	}
	node* Getroot()
	{
		return root;
	}
	void print()
	{
		cout << indx->val << endl;
	}
	void MoveLeft()
	{
		if (indx->prev)
			indx = indx->prev;
	}
	void MoveRight()
	{
		if (indx->next)
			indx = indx->next;
	}
	void insertLeft(ll x)
	{
		node*curr = new node(x, indx->prev);
		curr->next = indx;
		if (indx->prev)
			indx->prev->next = curr;
		else
			top = curr;
		indx->prev = curr;
	}
	void insertRight(ll x)
	{
		node*curr = new node(x, indx);
		curr->next = indx->next;
		if (indx->next)
			indx->next->prev = curr;
		indx->next = curr;
	}
	~Linked()
	{
		while (top)
		{
			node * curr = top;
			top = top->next;
			delete curr;
		}
	}
};
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	Linked l;
	ll z;
	string s;
	cin >> n >> p;
	for (int i = 1; i <= n; i++)
	{
		cin >> aa;
		l.Insert(aa);
		if (p == i)
		{
			indx = l.Getroot();
		}
	}
	cin >> q;
	while (q--)
	{
		cin >> s;
		if (s == "print")
		{
			l.print();
		}
		else if (s == "moveLeft")
		{
			l.MoveLeft();
		}
		else if (s == "moveRight")
		{
			l.MoveRight();
		}
		else if (s == "insertLeft")
		{
			cin >> z;
			l.insertLeft(z);
		}
		else if (s == "insertRight")
		{
			cin >> z;
			l.insertRight(z);
		}

	}

}
