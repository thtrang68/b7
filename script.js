function toggleSection(sectionId) {
    var sections = document.querySelectorAll('.profile, .exercise-list, .exercise');
    sections.forEach(section => section.style.display = 'none');
    document.getElementById(sectionId).style.display = 'block';
}

function goBack() {
    var sections = document.querySelectorAll('.profile, .exercise-list, .exercise');
    sections.forEach(section => section.style.display = 'none');
}
