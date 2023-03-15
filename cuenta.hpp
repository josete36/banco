// *******************************************************************************
// Fichero de cabecera cuenta.hpp para la definición de la clase Cuenta
// *******************************************************************************

   //....... COMPLETAR TODO LO NECESARIO

   // ¡IMPORTANTE: ESPECIFICAR LOS MÉTODOS QUE SEAN const!!!

   // Constructor por defecto: titular vacío y cuenta y saldo a cero.
   

   // Constructor de copia
   

   // Constructor extendido
   Cuenta(const std::string &persona, unsigned cuenta, double saldo_inicial);

   // Destructor
   

   // Devuelve el nombre del titular de la cuenta
   std::string consultarNombre();

   // Devuelve el número de la cuenta
   unsigned consultarCuenta();

   // Devuelve el saldo de la cuenta
   double consultarSaldo();

   // Modifica el nombre de la cuenta
   void asignarNombre(const std::string &persona);

   // Modifica el número de la cuenta
   void asignarNumero(unsigned numeroNuevo);

   // Añade un depósito a la cuenta y devuelve el nuevo saldo
   // Se incrementa el saldo en la cantidad.
   // Se devuelve también el saldo resultante.
   // Precondición: cantidad > 0.0
   double realizarIngreso(double cantidad);

   // Retira dinero de la cuenta y devuelve el nuevo saldo.
   // Si cantidad <= saldo, se decrementa el saldo en esa cantidad y
   // se devuelve el saldo. Si no, no hace nada.
   // Precondición: cantidad > 0.0
   double sacarDinero(double cantidad);

   // Añade el interés al saldo de la cuenta y devuelve el nuevo saldo
   // Precondición: tasa_interes > 0.0 && tasa_interes <= 1.0
   double anyadeInteres(double tasa_interes);

   // Saca por pantalla toda la información de la cuenta bancaria
   void muestraEstadisticas();

   // OPERADOR DE ASIGNACIÓN
   // Implementado on-line por el profesor
   Cuenta & operator=(const Cuenta &otra_cuenta) {
      if (this != &otra_cuenta) {
         nombre = otra_cuenta.nombre;
         numero = otra_cuenta.numero;
         saldo = otra_cuenta.saldo;
      }

      return *this;
   }

   // OPERADOR DE COMPARACIÓN DE IGUALDAD
   // Implementado on-line por el profesor
   bool operator==(const Cuenta &otra_cuenta) const{
      return (nombre == otra_cuenta.nombre &&
              numero == otra_cuenta.numero &&
              saldo == otra_cuenta.saldo);
   }

   //....... COMPLETAR TODO LO NECESARIO