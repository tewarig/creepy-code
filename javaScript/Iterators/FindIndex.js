const animals = ['hippo', 'tiger', 'lion', 'seal', 'cheetah', 'monkey', 'salamander', 'elephant'];



const foundAnimal = animals.findIndex(num => {
  return num === 'elephant';
});
const startsWithS = animals.findIndex(num => {
  return num.charAt(0) === 's';
})
