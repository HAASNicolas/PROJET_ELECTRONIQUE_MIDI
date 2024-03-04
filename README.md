# PROJET_ELECTRONIQUE_MIDI
## Participants
* Lina Bachir
* Nicolas Haas
* Tanoh Koffi 

## Commandes github
Sous window: dans le répertoire faire clique droit 'ouvrir un git bach', puis aller dans le bon dossier (si c'est pas déjà le cas):
Sous linux: ouvrir un terminal, aller dans le bon dossier, exemple :
```
cd Documents/git_1A/PROJET_ELECTRONIQUE_MIDI/
```

Pour créer un nouveau répertoire git:
```
git --global user.name "Prénom et/ou Nom"
git --global user.email "Votre e-mail"
```
```
ssh-keygen
```
Copier l'adresse /c/....pub (example: /c/Users/user_name/.ssh/id_ed25519.pub)
```
cat adresse_pub_copié_ci_dessus
```
Copier ssh key
Ajouter ssh key on github.com -> setting -> sshkey
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