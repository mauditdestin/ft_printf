# 📣 ft_printf

**ft_printf** est un projet consistant à recréer la fonction `printf` de la bibliothèque standard C, avec un support pour plusieurs spécificateurs de conversion.  
Ce projet permet de mieux comprendre la gestion des arguments variadiques et le formatage de chaînes.

---

## 🎯 Objectifs

- Implémenter une version personnalisée de `printf` en C  
- Gérer les arguments variables avec `stdarg.h`  
- Supporter les conversions suivantes : `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`  
- Gérer correctement l’affichage, le comptage des caractères, et les cas d’erreur  

---

## ⚙️ Compilation

Le projet utilise un Makefile. Pour compiler :

```bash
make
```

---

## 🚀 Usage
Inclure ft_printf.h et lier avec la bibliothèque libftprintf.a dans vos projets.

Exemple simple :
```bash
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return 0;
}
```

---

## 📄 Spécificateurs supportés
- %c : caractère

- %s : chaîne de caractères

- %p : pointeur (adresse mémoire)

- %d et %i : entier signé

- %u : entier non signé

- %x et %X : hexadécimal (minuscule/majuscule)

- %% : caractère % littéral

---

## 📌 Remarques
Ce projet a été réalisé dans le cadre du cursus de l’École 42.
Il permet de comprendre la manipulation avancée des arguments variadiques et la gestion du formatage de texte en C.
