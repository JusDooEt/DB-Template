 # Qt Database Template
## About
This program is an example of how to connect a SQL database to a c++ application and how to structure queries. This should be used as a reference when creating other programs using a database ([test.db](build/Desktop_Qt_6_6_2_MinGW_64_bit-Debug/debug/Test.db)). A database allows for a large amount of data to be stored and easily accessed by a program. This program makes use of the QSqlDatabase class and QSqlQuery class which allow the programmer to communicate with and manipulate the database allowing insertions, deletions, searching and sorting data. A database also provides another layer of organization that can be taken advantage of by the program. For example, if the database contained two tables then data within a table could point to related data in another table. This means the programmer does not need to search an entire table of data to find the related data since it is already referenced by the original data set.

## ERP
![image](https://github.com/JusDooEt/DB-Template/assets/152052216/2695ab04-3944-4438-90f7-00dfac2f0964)



## Output
```
Database Connected
Data: 
1 "Cameron" "Abo"
2 "Chloe" "Shcwietz"
3 "Eric" "Bern"
4 "Jen" "T"
5 "Onyx" "Blackstone"
6 "Kona" "Hawaii"
7 "Carl" "Marx"
8 "Charlie" "Horse"
9 "Brock" "Rock"
10 "Carly" "Barly"
```

## Function
- void Widget::displayTable( QString table ) const
  - This function will create a QSqlQuery to retrieve data from the table passed through the function.
  - This function will check if the query is valid and if it executes properly. If not an appropriate message will be displayed to the console.
  - If the query is valid and executes properly then the function will display each data row until there are no more data rows in the table.



