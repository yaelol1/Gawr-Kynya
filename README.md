# Gawr Kynya! - Kyria Keymap

# About
This is my weeb QMK Kyria keymap, the main feature is its animation of [Gawr Gura](https://twitter.com/gawrgura), but it is really powerfull if you watch closely.

![kyria-layout](img/kyria.png)

# Features 
![Gawr-Animation](img/ykyria.png)


![Gawr-Animation](img/gawr.gif)

Thaks to [j-inc](https://www.reddit.com/r/olkb/comments/h00a8b/i_made_an_oled_animation_of_bongo_cat_that/) for the code, [hikotel0611](https://danbooru.donmai.us/posts/4196461) and [this pixel art](https://www.pinterest.fr/pin/373095150361478394/) for the drawings.
## Frequency Symbol layer 
[Layer](#Symbol) 

The location of the symbols is mostly based on [frequency](http://xahlee.info/comp/computer_language_char_distribution.html) by various programming languages, but it also uses some mnemonics. 

Left hand -> brackets 

Right index finger -> logical operators 

 \ and | are key neighbors just like ~ and `

## Home row modifiers
The “home row” refers to the middle row of alpha keys “mods” refer to modifiers.

My home row mods go to the symbol layer, if you want to know more about implementation, you can go to the [wiki](https://precondition.github.io/home-row-mods).

## Enconder

There is one encoder on the right half. It has a different function depending on the layer.

[Base](#Layers) -> volume control

[Function](#Function) -> next/prev media 

[Symbol](#Symbol) -> up/down arrows

[Gaming](#Gaming) -> left/right arrows

## x-case 

Made by [Andrewjrae](https://github.com/andrewjrae/kyria-keymap#case-modes)

Case modes is a feature that implements different case handling modes, Caps Word, and X-Case. See [features/casemodes.c](features/casemodes.c) for implementation details.

# Layers 
## Base Layer: QWERTY 
```
//  ,-------------------------------------------.                              ,-------------------------------------------.
//  |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |   - _  |
//  |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  |  BS    |   A  |   S  |  D   |   F  |   G  |                              |   H  |   J  |   K  |   L  |  : ; |   ' "  |
//  |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  | NAV    |   Z  |   X  |   C  |   V  |   B  | meh  | Hyper|  | Space|c(sft)|   N  |   M  |  , < |  . > |  / ? | NAV    |
//  `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//                         |gaming|numpad|Caps  | esc  | Enter|  | Space|Menu  |Sneak |Cole- |Volume|    
//                         |      |      | word |      |      |  |      |      | case | mak  |      |          
//                         `----------------------------------'  `----------------------------------'    
```

c(sft) = ctrl + shift

## Base Layer: Colemak 

```
//  ,-------------------------------------------.                              ,-------------------------------------------.
//  |   TAB  |   Q  |   W  |   F  |   P  |   G  |                              |   J  |   L  |   U  |   Y  | ;  : |  -  _  |
//  |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  |    BS  |   A  |   R  |  S   |   t  |   d  |                              |   H  |   N  |   E  |   I  |   O  |  "'    |
//  |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  |  NAV   |   Z  |   X  |   C  |   V  |   B  |meh   |Hyper |  | Space|c(sft)|   K  |   M  | ,  < | . >  | /  ? |  NAV   |
//  `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//                         |gaming|numpad|Caps  | esc  | Enter|  | Space|Menu  |Sneak |Cole- |Volume|    
//                         |      |      | word |      |      |  |      |      | case | mak  |      |          
//                         `----------------------------------'  `----------------------------------'        
``` 

## Symbol  

```
//   ,-------------------------------------------.                              ,-------------------------------------------.
//   |        |   1  |  2   |   3  |   4  | 5    |                              |  6   |  7   |  8   |  9   |  0   |        |
//   |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//   |        |   @  |   [  |   {  |  (   |  \   |                              |   &  |  =   |  *   |  $   |  #   |        |
//   |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//   |        |   ^  |   ]  |   }  |  )   |  |   |      |      |  |      |      |  !   |  +   |   %  |  ~   |   `  |        |
//   `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//                          |      |      |      |      |      |  |      |      |      |      |      |
//                          |      |      |      |      |      |  |      |      |      |      |      |
//                          `----------------------------------'  `----------------------------------'
``` 

## Function 
```
//   ,-------------------------------------------.                              ,-------------------------------------------.
//   |        | F1   |  F2  | F3   | F4   | F5   |                              | F6   | F7   |  F8  | F9   | F10  |        |
//   |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//   |        |  ins |  left| up   | right| F11  |                              |  F12 |   m  |  mup |  m   | pgup |        |
//   |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//   |        | del  |print | down |  home| end  |      |      |  |      |      |  m   |   m  |   m  |  m   | pgd  |        |
//   `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//                          |      |      |      |      |      |  |      |      |      |      |      |
//                          |      |      |      |      |      |  |      |      |      |      |      |
//                          `----------------------------------'  `----------------------------------'

```
## Gaming  
```
//   ,-------------------------------------------.                              ,-------------------------------------------.
//   |  tab   |   q  |  1   |  2   |   3  |  4   |                              | f1   |  f2  |  f3  |   f4 |  f5  |   f6   |
//   |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//   | shift  |   a  |  w   |   f  |  p   |  g   |                              |      |      |      |      |      |        |
//   |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//   |  ctrl  |   z  | d    |   s  | x    |  c   |      |      |  |      |      |      |      |      |      |      |        |
//   `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//                          |      |      |      |      |      |  |      |      |      |      |      |
//                          |      |      |      |      |      |  |      |      |      |      |      |
//                          `----------------------------------'  `----------------------------------' 
```
## Numpad 
```
//  ,-------------------------------------------.                              ,-------------------------------------------.
//  |        |      |      |      |      |      |                              |  /   |  7   |  8   |   9  |  -   |        |
//  |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  |        | TOG  | SAI  | HUI  | VAI  | MOD  |                              |  *   |  4   |  5   |   6  |  +   |        |
//  |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  |        |      | SAD  | HUD  | VAD  | RMOD |      |      |  |      |      |  .   |  1   |  2   |   3  |Enter |        |
//  `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//                         |      |      |      |      |      |  |      |  0   |  0   |      |      |
//                         |      |      |      |      |      |  |      |      |      |      |      |
//                         `----------------------------------'  `----------------------------------'

```
