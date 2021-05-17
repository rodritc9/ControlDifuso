# ControlDifuso
Sistema difuso aplicado al control de péndulo invertido. Para generar reglas difusas y sus correspondientes funciones, se ha implementado una matriz FAM (Fuzzy Asociative Memory). 
El método para sintonizar los controladores de lógica difusa es una herramienta poderosa, por lo que no necesita conocimiento anterior sobre el comportamiento del sistema para 
poder formular una configuración funcional de reglas de control a través del aprendizaje adaptativo. Se utilizó borrosificador tipo singletone, evaluando la pertenencia según 
las reglas impuestas por la FAM. Para la desborrificación se usó el método por media de centros, obteniendo la fuerza a realizar sobre el carro. Se realizaron comparaciones 
con métodos simulados tipo PID, las cuales muestran la alta efectividad de la aproximación por lógica difusa.
