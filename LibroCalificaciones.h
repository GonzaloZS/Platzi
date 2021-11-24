#include<string>

class LibroCalificaciones
{
private:
    std::string nombreCurso;
public:
    explicit LibroCalificaciones(std::string);

    void setNombreCurso(std::string);
    std::string getNombreCurso() const;
    void showMensaje() const;
    void establishPromedio() const;
};