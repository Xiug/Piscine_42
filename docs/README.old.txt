Au login, un terminal apparait, affichant toutes les étapes nécessaires pour la récupération de vos fichiers.
Les plus importantes sont décrites dans l'ordre ci-dessous, dans le but de vous aider à comprendre ce processus.



Premièrement, le goinfre est monté:
/sbin/mount -t nfs -o 'hard,intr,async,vers=3,sec=krb5,rsize=524288,wsize=524288' zfs-student-1:/tank/sgoinfre /nfs/sgoinfre;

Cette commande permet de monter le goinfre sur /nfs/sgoinfre.
Ce que nous appelons 'goinfre' est un espace de partage, où chaque étudiant à la liberté d'y déposer les fichiers et dossiers qu'il souhaite, sans restrictions. Gardez cependant en tête que tout abus sera forcement sanctionné.
Tous les droits sont à la discrétion des créateurs.

Ce goinfre nous permet de mettre à disposition un 'skel'.
Ce skel est l'ensemble des fichiers de base vous permettant de recréer un compte avec des paramètres de base et génériques.
Ce skel est récupéré lors de votre premier login si nous ne parvenons pas à trouver les fichiers qui nous permettront de remettre en place votre home.



Deuxièmement, votre home est monté:
/sbin/mount -t nfs -o 'hard,intr,async,vers=3,sec=krb5,rsize=524288,wsize=524288' $server:/tank/users/$USER ~$USER.mount;

Cette commande permet de monter votre home dans le répertoire précédent où votre home se situe, avec une extension: '.mount'.
Une inconnue est ici présente, le '$server'. Il est récupéré dans le path de votre home, pour le connaitre, faites simplement un 'echo ~$USER'.
Par exemple:
> echo ~kboulain
/nfs/zfs-student-2/users/2013/kboulain

Le serveur monté pour la récupération du home de kboulain est ici zfs-student-2.42.fr.

Nous recherchons dans ~$USER.mount le fichier .tar.tgz.
Il est le résultat de votre home compressé, obtenu au logout.
Si ce fichier est introuvable, nous utilisons le skel (cf. paragraphe sur le goinfre). Si ce fichier existe, il est récupéré puis extrait dans votre home.
Une fois ces opérations effectuées, le processus de login se poursuit.



Ceci est un mode dégradé mis en place pour que vous puissiez travailler dans de meilleures conditions que celles de la piscine, cependant, des réservations sont à souligner:
 - plus votre home est lourd, pour le temps de login et de logout sera long,
 - vous avez la liberté de reset votre home en supprimant votre ~$USER.mount/.tar.tgz,
 - si un problème survient, que vous venez nous voir et que nous nous apercevons que vos problèmes de login/logout sont dûs à des jeux ou autres fichiers téléchargés de taille conséquente, vous ne trouverez aucun soutien auprès de nous et nous le supprimerons.

Pour tous problèmes, remarques, ..., vous pouvez nous contacter via le système de tickets du Dashboard (dashboard.42.fr).
