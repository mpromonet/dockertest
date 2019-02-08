#include<iostream>
 
int main(int argc, char *argv[], char **envp){
   std::cout << "Hello World!" << std::endl;
   for (char **env = envp; *env != 0; env++) {
     char *thisEnv = *env;
     std::cout << thisEnv << std::endl;
   }
   return 0;
}
