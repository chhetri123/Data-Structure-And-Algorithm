const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question("Enter the characters to Compress? ", (name) => {
  decodeInput(name);
  readline.close();
});

class Huffman {
  constructor() {
    this.right = null;
    this.left = null;
    this.char = "";
    this.data = 0;
  }
}
const codedBinaryData = {};
const printCodedData = (node, decodedNum = "") => {
  if (node.left == null && node.right == null) {
    console.log(`${node.char} : ${decodedNum}`);
    codedBinaryData[node.char] = decodedNum.length;
    return;
  }
  printCodedData(node.left, decodedNum + "0");
  printCodedData(node.right, decodedNum + "1");
};
const getSortedArray = (data) => data.sort((a, b) => a.data - b.data);
const decodeInput = (originalSentence) => {
  const objInput = {};
  let head = null,
    firstNode,
    secondNode;

  console.log(`Total size of string :${originalSentence.length * 8} bytes`);
  originalSentence.split("").forEach((value) => {
    objInput[value] = objInput[value] ? objInput[value] + 1 : 1;
  });

  const charArray = [...Object.keys(objInput)];
  const charFreq = [...Object.values(objInput)];
  let encoded = [];
  for (let i = 0; i < charArray.length; i++) {
    let node = new Huffman();
    node.data = charFreq[i];
    node.char = charArray[i];
    encoded.push(node);
  }
  encoded = getSortedArray(encoded);
  while (encoded.length > 1) {
    firstNode = encoded.shift();
    secondNode = encoded.shift();
    head = new Huffman();
    head.data = firstNode.data + secondNode.data;
    head.left = firstNode;
    head.right = secondNode;
    encoded.push(head);
    encoded = getSortedArray(encoded);
  }
  // console.log(head);
  printCodedData(head);
  let totalCodedBytes = 0;

  Object.keys(codedBinaryData).forEach((el) => {
    totalCodedBytes += objInput[el] * codedBinaryData[el] + 8 + objInput[el];
  });
  console.log(`Compressed Size of String becomes = ${totalCodedBytes} bytes`);
};
