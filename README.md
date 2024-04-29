# PROJET_ELECTRONIQUE_MIDI
## Participants
* Lina Bachir
* Nicolas Haas
* Tanoh Koffi

## Code C
```C
int main (void)
{
  printf(C);
}
```

## Commandes github
Sous window: Dans le répertoire faire clique droit 'ouvrir un git bach', puis aller dans le bon dossier (si c'est pas déjà le cas):

Sous linux: Ouvrir un terminal, puis aller dans le bon dossier. Par exemple :
```
cd Documents/git_1A/PROJET_ELECTRONIQUE_MIDI/
```

Pour créer un nouveau répertoire git:
```
git config --global user.name "Pseudo git ou Nom Prénom"
git config --global user.email "Votre e-mail"
```
Testez
```
git clone adresse_du_git
```
Si git clone marche: Vous avez fini !
Sinon si git clone ne marche pas:
```
ssh-keygen
```
Faites Entrer plusieurs fois, puis copier l'adresse /c/....pub (example: /c/Users/user_name/.ssh/id_ed25519.pub)
```
cat adresse_pub_copié_ci_dessus
```
Copier ssh key, puis Ajouter ssh key sur github.com -> setting -> sshkey
```
git clone adresse_du_git
```

Pour récupérer les modifications distantes :
```
git pull
```

Pour pousser des modifications locales
```
git add .
git commit -m "Message à remplacer"
git push
```
# Rapport projet 
* Introduction

Notre projet consiste en la création d’un contrôleur MIDI, un dispositif électronique conçu pour interagir avec divers instruments et logiciels musicaux. Le contrôleur comporte une variété de boutons, de potentiomètres et de curseurs, offrant un contrôle précis et intuitif de nombreux aspects de la production musicale, tels que le volume, les effets, et la modulation.

La conception du contrôleur inclut l’intégration de plusieurs capteurs pour détecter les actions de l’utilisateur, qui sont ensuite traduites en signaux MIDI. Ces signaux sont transmis à un ordinateur ou un autre appareil musical via une interface MIDI, permettant un contrôle en temps réel de la musique.

Le développement de ce contrôleur MIDI inclut la mise en œuvre d’une carte électronique centrale, qui gère les signaux provenant des différents capteurs, ainsi qu’une interface de sortie pour la communication avec les appareils externes. Le schéma ci-dessous illustre le principe général.

* objectif

Nous cherchons à créer un dispositif qui permette un contrôle précis et efficace des éléments clés de la production musicale, tels que le volume, les effets, et la modulation.

* projet global (shema):
* shema bloc:
