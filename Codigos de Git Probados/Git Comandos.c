
Ramas

    // Revisar que ramas hay
    git branch

    // Revisar que ramas hay y en remoto
    git branch -a

    //crear una rama
    git branch NOMBRE-NUEVA-RAMA


    //moverte a una rama
    git checkout NOMBRE-NUEVA-RAMA


    // checar cambios
    git status

    // agregar los cambios
    git add



Status y Commits

    //checar archivos
    git status


    //argregar archivos modificados al repo
    git add


    //hacer comit
    git commit


    (	guardar comentario de commit
        oprimir "esq"

        y lugo escribir 
        ":wq"

        presionar "Enter"
    )


    Publicar en server
    git push




Despues de Push
    $ git push --set-upstream origin TM20
    warning: missing OAuth configuration for gitlab.tecnomotum.com - see https://aka.ms/gcm/gitlab for more information
    Enumerating objects: 34, done.
    Counting objects: 100% (34/34), done.
    Delta compression using up to 12 threads
    Compressing objects: 100% (20/20), done.
    Writing objects: 100% (21/21), 323.33 KiB | 12.93 MiB/s, done.
    Total 21 (delta 12), reused 0 (delta 0), pack-reused 0 (from 0)
    remote:
    remote: To create a merge request for TM20, visit:
    remote:   https://gitlab.tecnomotum.com/tecnomotum/idh/vectormotum/-/merge_requests/new?merge_request%5Bsource_branch%5D=TM20
    remote:
    To https://gitlab.tecnomotum.com/tecnomotum/idh/vectormotum.git
    * [new branch]      TM20 -> TM20
    branch 'TM20' set up to track 'origin/TM20'.




Error de Commits prublicacion

    $ git commit
    Author identity unknown

    *** Please tell me who you are.

    Run

    git config --global user.email "you@example.com"
    git config --global user.name "Your Name"

    to set your account's default identity.
    Omit --global to set the identity only in this repository.

    fatal: unable to auto-detect email address (got 'Tecnomotum@DESKTOP-H73NA51.(none)')

    // comandos que yo use
    git config --global user.email guillermorosas@tecnomotum.com
    git config --global user.name Guillermo Rosas

Error que tuve al hacer el push

    $ git push
    fatal: The current branch TM20 has no upstream branch.
    To push the current branch and set the remote as upstream, use

        git push --set-upstream origin TM20

    To have this happen automatically for branches without a tracking
    upstream, see 'push.autoSetupRemote' in 'git help config'.




///

