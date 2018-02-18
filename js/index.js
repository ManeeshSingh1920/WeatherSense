function setGauge(gauge)
{
  var percentage = $(gauge).data('percentage') / 100;
  percentage_ = constrain(percentage,0,100);
  var degrees = 180 * percentage_;
  var pointerDegrees = degrees - 90;
  var spinner = $(gauge).find('.spinner');
  var pointer = $(gauge).find('.pointer');
  $(spinner).attr({
    style: 'transform: rotate(' + degrees + 'deg)'
  });
  $(pointer).attr({
    style: 'transform: rotate(' + pointerDegrees + 'deg)'
  });
}
*/
