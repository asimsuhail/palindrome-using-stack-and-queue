#include<iostream>

using namespace std;

class Solution { //Write your code here 
  struct list {
    char c; 
    list*nxt;
  }; 
  list *shead,*i,F,R; 
  public:
      Solution() {
        shead=F=R=i=NULL;
      } 
      void pushCharacter(char ch)
      {
        listnn= new list;
        nn->c=ch;
        nn->nxt=NULL;
        if(shead == NULL) {
          shead=nn;
        } 
        else {
          nn->nxt=shead; shead=nn;
        }
      } 
      void enqueueCharacter(char ch) 
      { 
        list nn=new list;
        nn->c=ch; 
        if(F==NULL && R==NULL) {
          R=F=nn;
        }
        else {
          R->nxt=nn;
          R=R->nxt;
        }
      }
      char popCharacter() {
        char j=shead->c;
        listtemp;
        temp = shead;
        if(shead->nxt == NULL) {
          shead=NULL;
        } 
        else {
          shead = shead->nxt;
        }
        delete temp;
        return j;
      } 
      char dequeueCharacter() {
        char temp; 
        listnn=F; 
        temp=F->c;
        if(F==R) {
          F->nxt = NULL;
          R->nxt = (NULL);
        }
        else {
          F=F->nxt;
        } 
        delete nn;
        return temp;
      }

};

int main() { // read the string s. string s; getline(cin, s);

// create the Solution class object p.
Solution obj;

// push/enqueue all the characters of string s to stack.
for (int i = 0; i < s.length(); i++) {
    obj.pushCharacter(s[i]);
    obj.enqueueCharacter(s[i]);
}

bool isPalindrome = true;

// pop the top character from stack.
// dequeue the first character from queue.
// compare both the characters.
for (int i = 0; i < s.length() / 2; i++) {
    if (obj.popCharacter() != obj.dequeueCharacter()) {
        isPalindrome = false;
        
        break;
    }
}

// finally print whether string s is palindrome or not.
if (isPalindrome) {
    cout << "The word, " << s << ", is a palindrome.";
} else {
    cout << "The word, " << s << ", is not a palindrome.";
}

return 0;
}
