/**
 * @param {Array} arr
 * @return {Matrix}
 */
function jsonToMatrix(arr) {
     
      const flattenObject = (obj, prefix = "") => {
        let result = {};

       
        for (let key in obj) {
          let value = obj[key];

          if (typeof value === "object" && value !== null) {
            let flattened = flattenObject(value, prefix + key + ".");
            result = { ...result, ...flattened }; // Merge flattened object into the result
          }
         
          else {
            result[prefix + key] = value;
          }
        }

        return result;
      };

      // Flatten each object in the input array
      let flattenedArr = arr.map(obj => flattenObject(obj));

      // Collect all unique keys/columns from the flattened objects
      let columnSet = new Set();
      flattenedArr.forEach(obj => {
        Object.keys(obj).forEach(key => columnSet.add(key));
      });

      // Sort the columns in lexographically ascending order
      let columns = Array.from(columnSet).sort();

      // Initialize the matrix with the column names as the first row
      let matrix = [columns];

      // Populate the matrix with values from the flattened objects
      flattenedArr.forEach(obj => {
        // Create a row by mapping the columns and retrieving the corresponding value from the object
        let row = columns.map(key => (obj[key] !== undefined ? obj[key] : ""));

        // Add the row to the matrix
        matrix.push(row);
      });

      return matrix; // Return the resulting matrix
    }