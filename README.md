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
