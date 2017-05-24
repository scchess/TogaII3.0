
Brief Description
------------------------

TOGA II 3.0
- This development of Toga is by Jerry Donald
- The code was based on Toga II 2.0 by Fabien Letouzey, Thomas Gaksch, Jerry Donald and Chris Formula
- Thanks to Denis Mendoza for the compile support
- Thanks to Thomas Gaksch and Fabien Letouzey for the Fruit/TogaII source code
- Thanks to Shaun Brewer for the test support

Changes:
- Multi-PV fixed
- Aspiration windows
- Hash table used in quiescent search (for lookup as well as store)
- LMR improved (thanks to the authors of Stockfish and Protector)
- TT avoid null-move flag
- New Endgame Knowledge
- Improved Mobility Evaluation (Ben Tennison)
- Piece Combo (QN vs QB) adjustment

TOGA II 2.0
- This development of Toga is by Jerry Donald
- The code was based on Toga II 1.4.1SE by Fabien LetouzeyThomas Gaksch and Chris Formula
- Thanks to Denis Mendoza for the compile support
- Thanks to Thomas Gaksch and Fabien Letouzey for the Fruit/TogaII source code
- Thanks to Shaun Brewer for the test support

Changes:
- Futility Margin is now dependent on played move count
- Razoring full_quiescence() bounds fixed (thanks to Lucas Braesch)
- Several eval() bounds fixed
- Improved Pawn Shelter
- Improved Knight Outpost
- Improved Bishop Mobility
- New Endgame Material Adjustments
- Piece Values tweaked
- Egbb bugfix (Teemu Pudas)

TOGA II 1.4.1SE
- This is an experimental engine by Chris Formula
- The code was based on Toga II 1.4beta5c by Thomas Gaksch
- Changes were an extended version of settings implemented in Toga II 3.1.2SE
- Improved search efficiency
- Thanks to Thomas Gaksch and Fabien Letouzey for the Fruit/TogaII source code
- Thanks to Shaun Brewer for the test support
- Thanks to Denis Mendoza for the compile support


TOGA II 1.4 BETA5C
- THIS VERSION is only a TEST VERSION. 
- For mp support a simple shared hashtable is used. MultiPV is not working with this beta.
- The number of threads must be set before compiling in search.h.
- Thanks a lot to Shaun Brewer, Dieter Eberle, Chris Formula, Denis Mendoza, Alessandro Scotti, 
Tord Romstad and much much more. 
- Without their help i wouldn´t be able to increase the playing strength, compared to Fruit 2.1.


Legal Details
-------------------

Toga II 1.3x4 (beta version) based on Fruit 2.1 by Fabien Letouzey.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
USA

See the file "copying.txt" for details.


General
-----------

Toga II 1.3x4 based on Fruit is a UCI-only chess engine.  This distribution comes up only with
Windows executable and platform-independent source code.


Official distribution 
--------------------------

You can download the GNU GPL Package (incl. sources) with Toga II based on Fruit at: http://www.superchessengine.com/
or send an email to togaII@gmx.de


Version
-----------

Toga II 1.3x4 based on Fruit 2.1

Following changes and extensions made:

- improved history pruning 
- improved futility pruning
- improved lazy evaluation
- new evaluation features (outpost knight etc.)
- MultiPV Mode

New in 1.2 

- more pruning
- more extensions
- new settings by Dieter Eberle

New in 1.2.1

- new settings
- some minor bugfixes

new in 1.3x4

- changes in eval
- changes in search 
- Endgame bitbases by Daniel Shawul (Scorpio)

new 1.3x4b

- bugfix of the endgame bitbases with help from Daniel Shawul 

A very big thank to Daniel Shawul for sharing his great endgame bitbases and his dll.

EGBBs
-----
    Toga uses the Scorpio endgame bitbases upto 5 pieces.
   
    Installation 
    ------------
       First You have to download the 5men bitbases from Leo Dijksman's WBEC site 
       http://www.wbec-ridderkerk.nl . The egbbs are 340mb in size. Then put them 
       anywhere in your computer. The default path is c:\egbb\ but you can change this in the uci options. 
       The egbbdll.dll must be in the same folder as the bitbase files.

Thanks Fabien Letouzey for the great source code of the program Fruit 2.1.

Special thanks to
Dieter Eberle, Karl-Heinz Söntges, Shaun Brewer for testing Beta Versions.
A big thank to Dieter Eberle for his setting.
Orlando Mouchel for bugfixes and new ideas.
Wilhelm Hudetz for the Logo.

Without their help i wouldn´t be able to increase the playing strenght, compared to Fruit 2.1, by about 100 Elo.


Thomas Gaksch


