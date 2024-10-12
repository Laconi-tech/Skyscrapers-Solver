# Skyscrapers-Solver

Ce projet est un solveur du jeu de puzzle « SkyScrapers » développé en langage C. Il est conçu pour résoudre automatiquement les grilles 4x4 de SkyScrapers en utilisant une approche de recherche et de retour en arrière. Le solveur est conçu pour résoudre automatiquement les grilles 4x4 de SkyScrapers en utilisant une approche de recherche et de backtracking.

Règles du jeu SkyScrapers
Le jeu SkyScrapers se joue sur une grille carrée de taille 4x4, où chaque espace peut contenir un gratte-ciel d'une hauteur comprise entre 1 et 4. Les règles du jeu sont les suivantes :

Chaque colonne et chaque ligne doit contenir des gratte-ciel de hauteur différente.
Le nombre visible d'un point de vue donné (en haut ou en bas) doit correspondre au nombre affiché à l'extérieur de la grille.
Un gratte-ciel bloque la vue des gratte-ciel situés derrière lui, de sorte qu'un gratte-ciel plus petit ne peut pas être vu derrière un gratte-ciel plus grand.

1. git clone git@github.com:Laconi-tech/Skyscrapers-Solver.git

2. cd [votre dossier]

3. compilez tous les fichiers .c (gcc *.c)

4. exécutez ./a.out « [écrivez le nombre dans cet ordre : haut, bas, gauche, droite] »

    -exemple : gcc *.c && ./a.out « 3 1 2 3 2 2 3 1 2 2 1 3 3 2 2 1 »  
        -numéro du haut : 3 1 2 3  
        -nombre en bas : 2 2 3 1  
        -nombre à gauche : 2 2 1 3  
        -numéro de droite : 3 2 2 1  

5. Amusez-vous bien avec ce cheat ;-)
