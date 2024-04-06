
const form = document.getElementById('Formulario');

form.addEventListener('Cargar', function(event) {
    const fechaInicio = new Date(document.getElementById('fechaInicio').value);
    const fechaFin = new Date(document.getElementById('fechaFin').value);

    if (fechaFin <= fechaInicio) {
        alert('Debe estar entre el rango');
        event.preventDefault();
    }
});