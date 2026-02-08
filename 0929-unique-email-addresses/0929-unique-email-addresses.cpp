class Solution {
public:

  string EmailCleaner(string email){
    string cleanEmail = "";

    for(int i  = 0 ;  i < email.size();i++){
      if(email[i]=='.')continue;
       if(email[i]=='+') break;
       if(email[i]=='@') break;
      cleanEmail =  cleanEmail + email[i];
     
    }
    int position = email.find('@');
    for(int i = position ; i < email.size();i++){
      cleanEmail=cleanEmail+email[i];
    }
    return cleanEmail ;
  }

    int numUniqueEmails(vector<string>& emails) {
      unordered_set<string> bag ;
      for(int i = 0 ; i < emails.size();i++){
        string ele = EmailCleaner(emails[i]);
        bag.insert(ele);
      }
      return bag.size();
        
    }
};