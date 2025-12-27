
#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int referencia;
    char descripcion[90];
    int talla;
    char disponibilidad;
    int cantidad;
    double costo, precio, utilidadUnidad, utilidadTotal, porcentajeUtilidad;
    double costoTotal, precioTotal;
    char tipoZapato;
    char continuar;

    std::cout<<"SHOE SALES MANAGEMENT SYSTEM\n";

    do {
        std::cout<<"\nEnter the shoe reference number: ";
        std::cin >> referencia;

        std::cout<<"Enter the shoe description: ";
        std::cin.ignore();
        std::cin.getline(descripcion, 90);

        std::cout<<"Enter the shoe size: ";
        std::cin>>talla;

        std::cout<<"Enter availability for sale (Y/N): ";
        std::cin>>disponibilidad;

        std::cout<<"Enter the quantity of shoes: ";
        std::cin>>cantidad;

        std::cout<<"Enter the cost of the shoe: ";
        std::cin>>costo;

        if (costo <= 30000) {
            tipoZapato = 'A';
        } else if (costo <= 60000) {
            tipoZapato = 'B';
        } else {
            tipoZapato = 'C';
        }

        switch (tipoZapato) {
            case 'A':
                porcentajeUtilidad = 50;
                precio = costo + (costo * 0.50);
                break;
            case 'B':
                porcentajeUtilidad = 40;
                precio = costo + (costo * 0.40);
                break;
            case 'C':
                porcentajeUtilidad = 30;
                precio = costo + (costo * 0.30);
                break;
            default:
                porcentajeUtilidad = 0;
                precio = costo;
                break;
        }

        utilidadUnidad = precio - costo;
        utilidadTotal = utilidadUnidad * cantidad;
        costoTotal = costo * cantidad;
        precioTotal = precio * cantidad;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n=== SHOE DETAILS ===\n";
        std::cout << "Shoe reference: " << referencia << "\n";
        std::cout << "Shoe description: " << descripcion << "\n";
        std::cout << "Shoe size: " << talla << "\n";
        std::cout << "Availability (Y/N): " << disponibilidad << "\n";
        std::cout << "Quantity: " << cantidad << "\n";
        std::cout << "Shoe type (A/B/C): " << tipoZapato << "\n";
        std::cout << "Unit cost: $ $" << costo << "\n";
        std::cout << "Total cost: $" << costoTotal << "\n";
        std::cout << "Unit price (calculated): $" << precio << "\n";
        std::cout << "Total price (all units): $" << precioTotal << "\n";
        std::cout << "Profit per unit: $" << utilidadUnidad << "\n";
        std::cout << "Total profit: $" << utilidadTotal << "\n";
        std::cout << "Applied profit percentage: " << porcentajeUtilidad << "%\n";

        std::cout << "\nDo you want to enter another shoe? (Y/N): ";
        std::cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    std::cout<<"\nThank you for using the program.\n";
    std::cout<<"DEVELOPED BY LUIS FERNANDO AGAMEZ ATEHORTUA\n";
    
    system("pause");
    return 0;
}