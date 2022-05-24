#include <iostream>
#include <vector>
#include <queue>
#include <map>



using namespace std;
namespace ariel
{
    struct Node
    {
        string name;
        bool visited;
        Node *next;
        Node *back;
        int level;
    

        vector <Node> fam;
      //  vector <nodePtr> children;
       
    };
    typedef Node* nodePtr;
    class OrgChart
    {
    private:
  
     
    public:
        Node head;
        nodePtr root;
        nodePtr root2;
        int t=0;
        int maxlevel=0;


          vector <Node> children;
          vector <Node> temp;
          vector <string> b_l_o;
          vector <string> b_r_o;
          vector <string> b_p;


    bool begin_level_order1(Node &n);
    bool end_level_order1(Node &n);
    bool begin_preorder1(Node &n);
    bool begin_reverse_order1(Node &n);
    bool init(Node &n);

   
    bool add_sub2(Node &n,string father, string child,bool flag);


        OrgChart &add_root(string const &name);
        OrgChart &add_sub(string const &father, string child);

        string *begin_level_order();
        string *end_level_order();

        string *begin_reverse_order();
        string *reverse_order();

        string *begin_preorder();
        string *end_preorder();

       string *begin();
       string *end();
        friend ostream &operator<<(ostream &os, OrgChart &org);
        
    };
    
    
}