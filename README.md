# tp1
## Ejercicio 2

**Por qué es conveniente incluir un archivo .gitignore**

Es fundamental para evitar que archivos basura, temporales o ejecutables (como los .exe) se suban al repositorio, manteniendo el proyecto limpio.

**cuando se debe hacer**

Se debe crear e configurar al inicio del proyecto, antes de hacer el primer commit importante.

**Como configuraria el .gitignore**

Lo configuraria dependiendo el lenguaje que voy a usar y con los patrones que se que van a tener archivos no necesarios para el repositorio 

## Ejercicio 3

**Codigo misterioso**

el codigo empieza con un numero  que pasa por 3 funciones:
    -Funcion alpha: tiene una variable que guarda el valor de donde apunta el puntero p y una variable rev= 0, mientras el valor sea mayor que 0 esta multiplica rev por 10 y suma el resto  de la division de *p por 10, guarda el  valor en rev y  divide  el *p en 10, y asi va repitiendo,  es decir que  la  funcion invierte el numero inicial y lo guarda *p nuevamente
    -Funcion beta: simplemente divide *p en 2
    -Funcion gamma: agarra el valor de *p y crea una variable suma, mientras el valor de *p sea mayor que 0 la funcion agarra el valor de la  variable suma y le suma el resto de la division de *p en 10, lo  que esto hace es separar el valor en digitos y sumar estos, al final guarda el  valor de suma lo suma con el valor que ya tenia *p, es decir el valor del numero original invertido y dividido en 2 mas la suma de los digitos del valor que sale de la funcion beta

    *Renombrar funciones*
    -A alpha le puse invertir_num ya que invierte el numero original.
    -A beta le puse invertido_mitad ya que es la mitad del numero invertido original.
    -A gamma le puse digSum_Sum total ya que primero suma los digitos y luego a este valor le suma el numero que entro primero a la funcion

**Codigo sin funcionar**

Errores de sintaxis y logica:

    -Faltaba la biblioteca stdio.h para poder usar los printf y scanf
    -En el primer scanf faltaba el & para que el valor se guarde en esa direccion de memoria
    -faltaba ; al final de int suma
    -En la funcion void se perdia el valor duplicado y no se modificaba el original, entonces habia que hacer pasaje por referencia con punteros para llegar al valor original y reemplazarlo definitivamente
    -En return 0 faltaba el ; 

## Ejercicio 4

**Apartado C**

Creo que no hacen falta subir los archivos .exe ya que cuando se compile el codigo van a aparecer solos en cualquier computadora

**Apartado G** 

El resultado de los puntos 2 y 3 del apartado E son iguales porque el puntero apunta al mismo lugar de donde esta almacenado el valor de la variable. En el punto 4 se obtiene donde esta almacenada la direccion de memoria de la variable puntero, siendo esta diferente a las anteriores. Esto es porque son variables diferentes y no se almacenan 2 variables en un mismo lugar