using namespace std;

template <typename T, typename U>
class Comparacion {
    private:
        T valor1;
        U valor2;
    public:
        Comparacion(T, U);
        T max(T valor1, U valor2) {
            if (valor1 > valor2)
                return valor1;
            return valor2;
        }

        T min(T valor1, U valor2) {
            if (valor1 < valor2)
                return valor1;
            return valor2;
        }
};