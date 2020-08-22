let five = require('johnny-five');
let board = new five.Board({ port: "COM4" }); // needed to specify port here for some reason

let location = 0

board.on('ready', function () {

  // Define buttons, not as collection since we might want to change holdtime
  let button = new five.Button({ pin: 3, isPullup: true, holdtime: 100,})
  let up = new five.Button({ pin: 4, isPullup: true })
  let down = new five.Button({ pin: 5, isPullup: true })
  let left = new five.Button({ pin: 7, isPullup: true })
  let right = new five.Button({ pin: 6, isPullup: true })

  button.on('down', function () { message('FIRE')})
  button.on('hold', function () { message('hold')})
  button.on('up', function () { message('No FIRE') });

  up.on('down', function () { location++, console.log('Up'), console.log(location) })

  down.on('down', function () { location--, console.log('Down'), console.log(location) })

  left.on('down', function () { console.log('Left') })

  right.on('down', function () { console.log('Right') })
});

const message = (value) => {
  console.log(`doing ${value}`)
}