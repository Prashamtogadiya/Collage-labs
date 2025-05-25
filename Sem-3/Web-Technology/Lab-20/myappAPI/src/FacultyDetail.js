import { useEffect, useState } from "react";

function Faculty() {
    const [faculty, setFaculty] = useState([]);
    useEffect(() => {
        fetch("https://66ebd2f72b6cf2b89c5bd7ae.mockapi.io/faculty/faculty/" + params.id)
            .then((res) => res.json)
            .then((res) => setFaculty(res));
    }, [])

    return (
        <>
            <h1>{faculty.name}</h1>
            <p>{faculty.detail}</p>
            <img ser={faculty.img} />
        </>
    )
}