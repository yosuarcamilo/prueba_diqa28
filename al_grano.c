Configura tu identidad de Git (reemplaza con tu información):
   git config --global user.name "Tu Nombre Completo"
   git config --global user.email "tu.email@ejemplo.com"

   Configura tu identidad de Git (reemplaza con tu información):
   git add .
   git commit -m "Primer commit: proyecto de ejemplo para Git"

   Conecta con GitHub:
   git remote add origin https://github.com/tu-usuario/tu-repositorio.git

   Sube tus cambios a GitHub:
   git push -u origin master

































   // Para usar tu archivo PHP de XAMPP con Git y GitHub, sigue estos pasos:

   // 1. Abre una terminal y navega a la carpeta donde está tu archivo PHP en XAMPP.
   cd C:\xampp\htdocs\mi_proyecto_php

   // 2. Inicializa un repositorio Git en esa carpeta.
   git init

   // 3. (Opcional) Crea un archivo .gitignore para excluir archivos/carpetas que no quieras subir (por ejemplo, configuraciones locales).
   // Puedes crear el archivo con un editor de texto y agregar líneas como:
   // /vendor/
   // *.log
   // .env

   // 4. Agrega tus archivos al repositorio.
   git add .

   // 5. Haz tu primer commit.
   git commit -m "Primer commit de mi proyecto PHP en XAMPP"

   // 6. Crea un repositorio en GitHub (desde la web) y copia la URL.

   // 7. Conecta tu repositorio local con el de GitHub.
   git remote add origin https://github.com/tu-usuario/tu-repositorio.git

   // 8. Sube tus archivos a GitHub.
   git push -u origin master

   // Ahora tu archivo PHP de XAMPP está versionado con Git y disponible en GitHub.

   // Si ya subiste el proyecto a GitHub y tienes una versión actualizada en tu computadora, sigue estos pasos para actualizar el repositorio remoto:

   // 1. Abre una terminal y navega a la carpeta de tu proyecto.
   cd C:\xampp\htdocs\mi_proyecto_php

   // 2. Verifica el estado de tus archivos (opcional).
   git status

   // 3. Agrega los archivos modificados o nuevos.
   git add .

   // 4. Haz un commit con un mensaje descriptivo.
   git commit -m "Actualización del proyecto con los últimos cambios"

   // 5. Sube los cambios a GitHub.
   git push origin master

   // Con esto, tu repositorio en GitHub tendrá la versión más actualizada de tu proyecto.