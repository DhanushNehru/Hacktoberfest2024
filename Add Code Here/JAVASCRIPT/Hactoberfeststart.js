// Function to print Hacktoberfest message
function printHacktoberfestMessage(year) {
    console.log(`🎉 Happy Hacktoberfest ${year}! 🎉`);
    console.log("Contribute to open-source and grow your skills!");
  }
  
  // Loop to print the message multiple times
  function celebrateHacktoberfest(year, times) {
    for (let i = 1; i <= times; i++) {
      console.log(`\nCelebration ${i}:`);
      printHacktoberfestMessage(year);
    }
  }
  
  // Hacktoberfest 2024 celebration
  const year = 2024;
  const celebrations = 3;
  
  celebrateHacktoberfest(year, celebrations);
  