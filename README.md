# C_project, Project:Genshin

### 1. Project Overview
 This project is **a projct of Kwangwoon Univesity's 'Advanced C Programming' class in the second 
semester of 2022.** The name was named 'Project:Genshin' by taking the English name of *原神*, which
became the motif of the project of idea.
 Currently, there are a total of more than 60 characters in the game, and 22 of them are five-star
characters, the highest class. Therefore, from the view of users who play games, their  biggest 
interest is **'Which characters are coming out this time? Or Which characters rerun?'**. So, this 
project aims to **show character rerun version into list** and **improve a functions that shows character 
information** such as home of the character, the type of weapon and elements it uses, and the date of 
its first release version and rerun versions.

### 2. Purpose and necessity of the project
 So far, without a program that makes a list of limited characters, users have made it themselves with
'excel' every time each version starts. However, if the maker does not create or update list, the 
lastest information will not be updated. Also, there is a hassle of having to make it manually. Hence, 
our project was made to minimize this inconvenience and to add additional functions to not only load the list, 
but also provied useful information for playing the game.

### 3. Final Results of Project:Genshin
![image](https://user-images.githubusercontent.com/118319485/204201350-aabb3b3a-4b84-41f3-94ee-5514f8659e57.png)
▲ Project Flowchart in Korean

Unless 'end' was entered by user, the program will not be end and it repeated by selecting the function
to be executed. In addition, according to the enternd number, the function of <1. character rerun list> or
<2. chracter information search> is performed. Afterwards, the selected function is executed, and returned
to the function selection.

### 4. Experimented Result
 (1) **Saving character informaation using struct** : Memory was saved by preventing thoughtless use of variables.
 (2) **Implementation and separation of header files** : The weight of the main source file itself has been
 reduced and the desired function has been easily found to solve errors.
 (3) **Put background music in the console window** : After executing program, 'Hustle and Bustle of Ormos', 
 one of the music in the Genshin, will be played.
 (4) **Changing the color of the text displayed in the console window** : To improve the plain background, 
 we have performed the work of coloring sepcific words and sentences. 
 
 ### COMMENTS


-written by 우나륜-
