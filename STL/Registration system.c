    #include <map>
    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;
    int main()
    {
       long num;
       string name;
       cin >> num;
        map <string,int> db;
        vector <string> myv;
        map <string, int> ::iterator it = db.begin();
        vector<string>::iterator it1;
        
        for (long i =0 ;i<num;i++)
        {
     
            cin >> name;
            
            if (i==0)
            {
                db.insert(pair<string, int>(name, 0));
                db[name] = db[name] + 1;
                myv.push_back("OK");
            }
     
            else if (db.count(name) == 0 &&i!=0)
            {
                db.insert(pair<string, int>(name, 0));
                db[name] = db[name] + 1;
                myv.push_back("OK");
            }
            else if (db.count(name) != 0&&i!=0)
            {
                myv.push_back(name + to_string(db[name]));
                db[name] = db[name] + 1;
               
     
            }
         
     
     
        }
        for (it1 = myv.begin(); it1 != myv.end(); it1++)
            cout << *it1 << "\n";
     
       
        return 0;
     
     
    }