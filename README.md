# Conversiones
Este código en C es un programa de conversión de unidades que permite al usuario elegir entre dos sistemas de medidas: Sistema Inglés y Sistema Internacional (SI), y luego realizar conversiones de longitud, masa y volumen entre estos sistemas. A continuación, describiré las principales partes y funcionalidades del código:

1. Inclusión de bibliotecas: El programa incluye dos bibliotecas estándar de C, <stdio.h> y <conio.h>, que son necesarias para las funciones de entrada y salida estándar, así como para algunas funcionalidades relacionadas con la pantalla. Es importante mencionar que la biblioteca <conio.h> no es estándar y es específica de ciertos compiladores de C/C++.
   
2. Funciones de conversión: El código define tres funciones para realizar conversiones entre unidades:

calcular_Longitud: Convierte longitud de pies (ft) o pulgadas (in) a metros (m).
calcular_Masa: Convierte masa de onzas (oz) a gramos (g).
calcular_Volumen: Convierte volumen de galones (gal) a litros (lt).

3. Función main: La función principal del programa comienza con main(). Aquí se realiza la interacción principal con el usuario. El programa sigue estos pasos:

Pregunta al usuario que elija entre el Sistema Inglés (1) o el Sistema Internacional (2).
Luego, pregunta qué tipo de conversión desea realizar: longitud, masa o volumen.

4. Selección de conversión: Dependiendo de la elección del usuario, el programa solicita la cantidad que desea convertir en la unidad específica del sistema elegido.

5. Llamadas a las funciones de conversión: El programa realiza llamadas a las funciones de conversión correspondientes (por ejemplo, calcular_Longitud, calcular_Masa, calcular_Volumen) según las elecciones del usuario.

6. Impresión de resultados: Después de realizar la conversión, el programa muestra el resultado de la conversión en la pantalla.

7. Manejo de errores: El código incluye manejo de errores básico para lidiar con selecciones no válidas por parte del usuario. Si el usuario ingresa una opción no válida, el programa muestra un mensaje de error.

Es importante tener en cuenta que el uso de <conio.h> para funciones como getch() no es portable y puede no funcionar en todos los compiladores o sistemas operativos. Además, el código podría ser más robusto si incluye manejo de errores más detallado y si utiliza estructuras de control como switch para simplificar el flujo del programa.

En resumen, este código es un programa simple de conversión de unidades que permite al usuario realizar conversiones entre el Sistema Inglés y el Sistema Internacional en tres categorías diferentes: longitud, masa y volumen.
