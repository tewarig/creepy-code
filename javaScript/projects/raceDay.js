let raceNumber = Math.floor(Math.random() * 1000);
const isRegisteredEarly = true;
const age = 18;
if(isRegisteredEarly && age>18)
{
  raceNumber +=1000;
}
if (isRegisteredEarly && age>=18)
{
  console.log('9:30 ' + raceNumber);
}else if(age>=18)
{
  console.log("11:00 " + raceNumber);
}else if(age < 18)
{
  console.log(raceNumber);
}
