
function getNum_v1(arr) {
return arr.sort((a , b)=> a - b)[arr.length -2];
}
let arr = [22, 44, 12,4,2, 133,90, 100,98,0,0.0, 111,1000, 888,-1,71, 33];
console.log(getNum_v1(arr));
function findSecondLargest(arr) {
    let largest = arr[0];
    let secondLargest = -Infinity;
  for (let i = 1; i < arr.length; i++) {
      if (arr[i] > largest) {
        secondLargest = largest;
        largest = arr[i];
      } else if (arr[i] < largest && arr[i] > secondLargest) {
        secondLargest = arr[i];
      }
    }
    return secondLargest;
  }
  // Example usage:
  const array = [5, 2, 10, 8, 3];
  const secondLargest = findSecondLargest(array);
  console.log("Second largest element:", secondLargest);