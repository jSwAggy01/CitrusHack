$("#equipmentlvl").change(function() {
  if ($(this).val() == "yes") {
    $('#goalDiv').hide();
    $('#setGoal').removeAttr('required');
    $('#setGoal').removeAttr('data-error');
  } else {
    $('#goalDiv').hide();
    $('#setGoal').attr('required', '');
    $('#setGoal').attr('data-error', 'This field is required.');
  }
});
$("#equipmentlvl").trigger("change");

$("#equipmentlvl").change(function() {
  if ($(this).val() == "none") {
    $('#noEquipDiv').show();
    $('#noEquipExercise').attr('required', '');
    $('#noEquipExercise').attr('data-error', 'This field is required.');
  } else {
    $('#noEquipDiv').hide();
    $('#noEquipExercise').removeAttr('required');
    $('#noEquipExercise').removeAttr('data-error');
  }
});
$("#equipmentlvl").trigger("change");

$("#noEquipExercise").change(function() {
  if ($(this).val() == "calisthenics") {
    $('#calisDiv').show();
    $('#calisExercises').attr('required', '');
    $('#calisExercises').attr('data-error', 'This field is required.');
  } else {
    $('#calisDiv').hide();
    $('#calisExercises').removeAttr('required');
    $('#calisExercises').removeAttr('data-error');
  }
});
$("#noEquipExercise").trigger("change");

$("#equipmentlvl").change(function() {
  if ($(this).val() == "moderate") {
    $('#moderateEquipDiv').show();
    $('#modEquipExercise').attr('required', '');
    $('#modEquipExercise').attr('data-error', 'This field is required.');
  } else {
    $('#moderateEquipDiv').hide();
    $('#modEquipExercise').removeAttr('required');
    $('#modEquipExercise').removeAttr('data-error');
  }
});
$("#equipmentlvl").trigger("change");

$("#equipmentlvl").change(function() {
  if ($(this).val() == "full") {
    $('#gymEquipDiv').show();
    $('#gymEquipExercise').attr('required', '');
    $('#gymEquipExercise').attr('data-error', 'This field is required.');
  } else {
    $('#gymEquipDiv').hide();
    $('#gymEquipExercise').removeAttr('required');
    $('#gymEquipExercise').removeAttr('data-error');
  }
});
$("#equipmentlvl").trigger("change");