// Function to find DNA pattern occurrences in a text
function findDNAMatches(text, pattern) {
    const occurrences = [];
    const textLength = text.length;
    const patternLength = pattern.length;

    for (let i = 0; i <= textLength - patternLength; i++) {
        let j;
        for (j = 0; j < patternLength; j++) {
            if (text[i + j] !== pattern[j])
                break;
        }
        if (j === patternLength)
            occurrences.push(i);
    }
    return occurrences;
}

const text = "ACGTTGCATGTCGCATGATGCATGAGAGCT";
const pattern = "GCATG";

// Find all occurrences of the pattern in the text
const occurrences = findDNAMatches(text, pattern);

// Print the positions of pattern occurrences
if (occurrences.length > 0) {
    console.log(`Pattern "${pattern}" found at positions:`);
    occurrences.forEach(position => console.log(position));
} else {
    console.log(`Pattern "${pattern}" not found in the text.`);
}
