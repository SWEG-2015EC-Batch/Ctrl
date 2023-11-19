input -> ramdom letter
opreation -> convert it to lower case if it is uppercase
          -> convert it to upper case if it is lowercase

output -> display the final letter


pseudo code
1. start
2. input a letter
3. if the letter is lower change to upper and if it is upper change to lower
4. print the case
5. end

flowchart
```mermaid
    flowchart TD;
    A([start])-->B[/input ramdom letter/];
    B-->C{check if it is uppercase};
    C--One-->D[convert it to lower case if it is uppercase];
    C--Two-->E[convert it to upper case if it is lowercase];
    D-->F([end]);
    E-->F([end]);
```
