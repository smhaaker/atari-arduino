
let five = require('johnny-five');
let board = new five.Board({ port: "COM4" }); // needed to specify port here for some reason

board.on('ready', function () {

  let button = new five.Button({ pin: 3, isPullup: true })
  let up = new five.Button({ pin: 6, isPullup: true })
  let down = new five.Button({ pin: 7, isPullup: true })
  let left = new five.Button({ pin: 4, isPullup: true })
  let right = new five.Button({ pin: 5, isPullup: true })

  button.on('down', function (value) { console.log('FIRED') })
  // button.on('up', function() { console.log('Silent') });
  up.on('down', function (value) { console.log('Up') })
  down.on('down', function (value) { console.log('Down') })
  left.on('down', function (value) { console.log('Left') })
  right.on('down', function (value) { console.log('Right') })
  
});

