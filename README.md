# FilmVault

## If Testing on a Virtual Machine (VM):
    If you are running this program on a Virtual Machine in Qt, the program might 
    display "Database not found" error when you try to run it.

    In such case:

    The system will automatically create a folder named build-FilmVault-Desktop-Debug. 
    Inside this folder, you need to manually copy and paste the entire movieDB folder 
    (which contains the movies.db file) into the build-FilmVault-Desktop-Debug folder.

## Install Requirment:

   Qt is required to run this application
     
## Testing Instructions: 

   - To test `movies.db`, you can run the following commands in your terminal:
        - `sqlite3 movies.db`
        - `.tables` - displays all tables (movies, users, creators,...)
        - `.schema movies` - schema for a specific table
        - `SELECT * FROM movies` - displays all 80 movie details 
    
   - Note: All user-related data was cleared before submission.
