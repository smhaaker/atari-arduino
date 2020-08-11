var five = require('johnny-five');
var board = new five.Board({ port: "COM4" }); // needed to specify port here for some reason
 
board.on('ready', function() {
  var led = new five.Led(13); // pin 13
  led.blink(500); // 500ms interval

  // var pin = new five.Pin(
  //   {
  //   pin: 3,
  //   type: "digital"
  //   }
  // );

  // pin.read(function(error, value) {
  //   console.log(value);
  // });

});

