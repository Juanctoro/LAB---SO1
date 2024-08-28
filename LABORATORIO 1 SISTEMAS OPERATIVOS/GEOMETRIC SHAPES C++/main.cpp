#include <iostream>
#include <string>

using namespace std;

// Clase base Forma
class Forma {
protected:
    string color;

public:
    Forma(string c = "blanco") : color(c) {}

    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    virtual double calcularArea() const = 0; // Método virtual puro para calcular el área
    virtual double calcularPerimetro() const = 0; // Método virtual puro para calcular el perímetro
};

// Clase derivada Rectangulo
class Rectangulo : public Forma {
private:
    double largo;
    double ancho;

public:
    Rectangulo(double l, double a, string c = "blanco") : Forma(c), largo(l), ancho(a) {}

    void setDimensiones(double l, double a) {
        largo = l;
        ancho = a;
    }

    double calcularArea() const override {
        return largo * ancho;
    }

    double calcularPerimetro() const override {
        return 2 * (largo + ancho);
    }
};

// Clase derivada Cuadrado
class Cuadrado : public Rectangulo {
public:
    Cuadrado(double lado, string c = "blanco") : Rectangulo(lado, lado, c) {}

    void setLado(double lado) {
        setDimensiones(lado, lado);
    }
};

// Clase derivada Triangulo
class Triangulo : public Forma {
private:
    double base;
    double altura;
    double lado3;

public:
    Triangulo(double b, double h, double l3, string c = "blanco") : Forma(c), base(b), altura(h), lado3(l3) {}

    void setDimensiones(double b, double h, double l3) {
        base = b;
        altura = h;
        lado3 = l3;
    }

    double calcularArea() const override {
        return (base * altura) / 2;
    }

    double calcularPerimetro() const override {
        return base + altura + lado3;
    }
};

int main() {
    int opcion;
    string color;

    cout << "Seleccione la forma que desea calcular:\n";
    cout << "1. Rectángulo\n";
    cout << "2. Cuadrado\n";
    cout << "3. Triángulo\n";
    cout << "Ingrese su opción: ";
    cin >> opcion;

    if (opcion == 1) {
        double largo, ancho;
        cout << "Ingrese el color del rectángulo: ";
        cin >> color;
        cout << "Ingrese el largo del rectángulo: ";
        cin >> largo;
        cout << "Ingrese el ancho del rectángulo: ";
        cin >> ancho;

        Rectangulo rectangulo(largo, ancho, color);
        cout << "Rectángulo de color " << rectangulo.getColor() << endl;
        cout << "Área: " << rectangulo.calcularArea() << endl;
        cout << "Perímetro: " << rectangulo.calcularPerimetro() << endl;

    } else if (opcion == 2) {
        double lado;
        cout << "Ingrese el color del cuadrado: ";
        cin >> color;
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;

        Cuadrado cuadrado(lado, color);
        cout << "Cuadrado de color " << cuadrado.getColor() << endl;
        cout << "Área: " << cuadrado.calcularArea() << endl;
        cout << "Perímetro: " << cuadrado.calcularPerimetro() << endl;

    } else if (opcion == 3) {
        double base, altura, lado3;
        cout << "Ingrese el color del triángulo: ";
        cin >> color;
        cout << "Ingrese la base del triángulo: ";
        cin >> base;
        cout << "Ingrese la altura del triángulo: ";
        cin >> altura;
        cout << "Ingrese el tercer lado del triángulo: ";
        cin >> lado3;

        Triangulo triangulo(base, altura, lado3, color);
        cout << "Triángulo de color: " << triangulo.getColor() << endl;
        cout << "Área: " << triangulo.calcularArea() << endl;
        cout << "Perímetro: " << triangulo.calcularPerimetro() << endl;

    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}

