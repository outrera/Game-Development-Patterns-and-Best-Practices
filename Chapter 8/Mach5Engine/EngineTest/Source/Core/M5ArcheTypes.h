/******************************************************************************/ 
/*! 
\file   M5ArcheTypes.h 
\author UserPreBuild.bat 
\par    email: lazersquad\@gmail.com 
\par    Mach5 Game Engine 
 
This file gets auto generated based on the names of the ArcheTypes in the 
current project.  UserPreBuild.bat looks for files of the type *.ini in the ArcheTypes folder 
and creates an enumeration value of AT_*. 
*/ 
/******************************************************************************/ 
#ifndef M5ARCHE_TYPES_H 
#define M5ARCHE_TYPES_H 
#include <string> 
 
 
//! AutoGenerated enum based on archetype ini file names  
enum M5ArcheTypes {  
AT_1024x768Button, 
AT_1280x768Button, 
AT_800x600Button, 
AT_BackButton, 
AT_Bullet, 
AT_FullscreenButton, 
AT_GameOverTitle, 
AT_MenuAsteroid, 
AT_MenuButton, 
AT_MenuSpawner, 
AT_MenuTitle, 
AT_OptionsButton, 
AT_OptionsTitle, 
AT_PauseTitle, 
AT_PlayButton, 
AT_Player, 
AT_QuitButton, 
AT_Raider, 
AT_Splash, 
AT_Ufo, 
AT_WindowedButton, 
AT_INVALID 
}; 
 
 
//! AutoGenerated function to convert strings to our M5ArcheTypes type 
inline M5ArcheTypes StringToArcheType(const std::string& string) { 
if(string == "1024x768Button") return AT_1024x768Button; 
if(string == "1280x768Button") return AT_1280x768Button; 
if(string == "800x600Button") return AT_800x600Button; 
if(string == "BackButton") return AT_BackButton; 
if(string == "Bullet") return AT_Bullet; 
if(string == "FullscreenButton") return AT_FullscreenButton; 
if(string == "GameOverTitle") return AT_GameOverTitle; 
if(string == "MenuAsteroid") return AT_MenuAsteroid; 
if(string == "MenuButton") return AT_MenuButton; 
if(string == "MenuSpawner") return AT_MenuSpawner; 
if(string == "MenuTitle") return AT_MenuTitle; 
if(string == "OptionsButton") return AT_OptionsButton; 
if(string == "OptionsTitle") return AT_OptionsTitle; 
if(string == "PauseTitle") return AT_PauseTitle; 
if(string == "PlayButton") return AT_PlayButton; 
if(string == "Player") return AT_Player; 
if(string == "QuitButton") return AT_QuitButton; 
if(string == "Raider") return AT_Raider; 
if(string == "Splash") return AT_Splash; 
if(string == "Ufo") return AT_Ufo; 
if(string == "WindowedButton") return AT_WindowedButton; 
return AT_INVALID; 
} 
#endif //M5ARCHE_TYPES_H 