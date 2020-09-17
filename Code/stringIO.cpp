/*
    Michael T. Miyoshi
    repo: CPPConsoleApps (private), also in SelfExplainingCode
    project: demo printf, inputting and outputting string
    pseudocode:
        use printf to tell user how to use 
            printf, 
            cin, 
            fseek(), 
            getline(cin, var);, 
            and getline(cin, var, ',');

    Notes:
        Whitespace: space, tab, newline
        delimiter:  a separator; an ending; 
                    something between two somethings to know when
                    one starts and the other begins.
    Maintenance Log:
        09/16/2020  started and finished code.
                    created repo
                    reminded myself how to input and output strings.
*/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    printf("I like printf(); ");
    printf("to output strings or anything...\n\n");
    string s = "Output a string using the placeholder %s and .c_str()\n";
    printf("%s\n", s.c_str());
    printf("Like so:\n\n");
    printf("string str = \"Something\";\n");
    printf("printf(\"%%s\\n\", str.c_str());\n\n");

    printf("input strings using:\n\tcin >> s;\n");
    printf("\tfseek(stdin, 0, SEEK_END);\n");
    printf("if you do not need to get whitespace.\n\n");
    printf("Use\n\tgetline(cin, s);\n\n");
    printf("if you want any whitespace besides newline\n\n");

    printf("Otherwise, use: \n");
    printf("\tgetline(cin, s, ',');\n");
    printf("where whatever is between the single quotes (') is your delimiter.\n\n");

    printf("Input something (without whitespace): ");
    string input;
    cin >> input;
    fseek(stdin, 0, SEEK_END);
    printf("%s\n", input.c_str());

    printf("Input something else (can have whitespace, but no newlines): ");
    getline(cin, input);
    printf("%s\n", input.c_str());

    printf("Input something else (press <TAB> followed by <ENTER> to end): ");
    getline(cin, input, '\t');
    printf("%s\n", input.c_str());

    return 0;
}
